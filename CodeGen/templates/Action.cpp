// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Actions/ROS2{{data.NameCap}}Action.h"

const rosidl_action_type_support_t* UROS2{{data.NameCap}}Action::GetTypeSupport() const
{
    return ROSIDL_GET_ACTION_TYPE_SUPPORT({{data.Group}}, {{data.NameCap}});
}

void UROS2{{data.NameCap}}Action::Init()
{
    Super::Init();
    {{data.Group}}__action__{{data.NameCap}}_SendGoal_Request__init(&{{data.NameCap}}_goal_request);
    {{data.Group}}__action__{{data.NameCap}}_SendGoal_Response__init(&{{data.NameCap}}_goal_response);
    {{data.Group}}__action__{{data.NameCap}}_GetResult_Request__init(&{{data.NameCap}}_result_request);
    {{data.Group}}__action__{{data.NameCap}}_GetResult_Response__init(&{{data.NameCap}}_result_response);
    {{data.Group}}__action__{{data.NameCap}}_FeedbackMessage__init(&{{data.NameCap}}_feedback_message);
}

void UROS2{{data.NameCap}}Action::Fini()
{
    {{data.Group}}__action__{{data.NameCap}}_SendGoal_Request__fini(&{{data.NameCap}}_goal_request);
    {{data.Group}}__action__{{data.NameCap}}_SendGoal_Response__fini(&{{data.NameCap}}_goal_response);
    {{data.Group}}__action__{{data.NameCap}}_GetResult_Request__fini(&{{data.NameCap}}_result_request);
    {{data.Group}}__action__{{data.NameCap}}_GetResult_Response__fini(&{{data.NameCap}}_result_response);
    {{data.Group}}__action__{{data.NameCap}}_FeedbackMessage__fini(&{{data.NameCap}}_feedback_message);
    Super::Fini();
}

void UROS2{{data.NameCap}}Action::SetGoal(const F{{data.StructName}} Goal)
{
    	/* TODO: Fill here */
}

void UROS2{{data.NameCap}}Action::GetGoal(F{{data.StructName}}& Goal) const
{
    	/* TODO: Fill here */
}

void UROS2{{data.NameCap}}Action::SetResult(const F{{data.StructName}} Result)
{
    	/* TODO: Fill here */
}

void UROS2{{data.NameCap}}Action::GetResult(F{{data.StructName}}& Result) const
{
    	/* TODO: Fill here */
}

void UROS2{{data.NameCap}}Action::SetFeedback(const F{{data.StructName}} Feedback)
{
    	/* TODO: Fill here */
}

void UROS2{{data.NameCap}}Action::GetFeedback(F{{data.StructName}}& Feedback) const
{
    	/* TODO: Fill here */
}


void* UROS2{{data.NameCap}}Action::GetGoalRequest()
{
    return &{{data.NameCap}}_goal_request;
}

void* UROS2{{data.NameCap}}Action::GetGoalResponse()
{
    return &{{data.NameCap}}_goal_response;
}

void* UROS2{{data.NameCap}}Action::GetResultRequest()
{
    return &{{data.NameCap}}_result_request;
}

void* UROS2{{data.NameCap}}Action::GetResultResponse()
{
    return &{{data.NameCap}}_result_response;
}

void* UROS2{{data.NameCap}}Action::GetFeedbackMessage()
{
    return &{{data.NameCap}}_feedback_message;
}