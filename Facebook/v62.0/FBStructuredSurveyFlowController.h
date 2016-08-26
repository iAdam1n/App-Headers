/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemStructuredSurvey, FBStructuredSurveyState, NSNumber;

@interface FBStructuredSurveyFlowController : NSObject {

	FBMemStructuredSurvey* _survey;
	FBStructuredSurveyState* _state;
	NSNumber* _totalQuestionsInSurvey;

}

@property (nonatomic,__weak,readonly) FBMemStructuredSurvey * survey; 
@property (nonatomic,readonly) FBStructuredSurveyState * state; 
-(id)firstTextQuestion;
-(FBMemStructuredSurvey *)survey;
-(id)_currentPage;
-(id)initWithSurvey:(id)arg1 ;
-(id)questionsForCurrentState;
-(unsigned long long)totalQuestionsInSurvey;
-(unsigned long long)nextQuestionNumber;
-(void)storeAnswers:(id)arg1 forQuestions:(id)arg2 ;
-(BOOL)isFinalPage;
-(id)_seenQuestionIDs;
-(FBStructuredSurveyState *)state;
-(unsigned long long)currentPageIndex;
@end
