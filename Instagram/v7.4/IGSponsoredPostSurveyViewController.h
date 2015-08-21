/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSurveyQuestionControllerDelegate.h>

@class IGSurveyTextualEmotionController, IGFeedItem;

@interface IGSponsoredPostSurveyViewController : IGViewController <IGSurveyQuestionControllerDelegate> {

	/*^block*/id _completion;
	IGSurveyTextualEmotionController* _questionController;
	IGFeedItem* _feedItem;

}

@property (nonatomic,copy) id completion;                                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) IGSurveyTextualEmotionController * questionController;              //@synthesize questionController=_questionController - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                              //@synthesize feedItem=_feedItem - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(IGSurveyTextualEmotionController *)questionController;
-(void)onHideTapped;
-(id)surveyQuestion;
-(void)dismissWithAnswer:(id)arg1 ;
-(void)surveyAnswerWasSelectedWith:(id)arg1 ;
-(void)setQuestionController:(IGSurveyTextualEmotionController *)arg1 ;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
@end

