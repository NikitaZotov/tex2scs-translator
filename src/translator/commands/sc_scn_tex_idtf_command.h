#pragma once

#include "sc_scn_tex_relation_command.h"

class ScSCnTexIdtfCommand : public ScSCnTexRelationCommand
{
public:
  ScScnTexCommandResult Complete(ScSCnPrefixTree & tree, ScScnTexCommandParams const & params) override;
};
