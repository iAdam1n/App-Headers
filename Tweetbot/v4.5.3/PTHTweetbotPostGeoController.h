/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class UILabel, UIButton, PTHTweetbotPostDraft, NSString;

@interface PTHTweetbotPostGeoController : PTHViewController <PTHTweetbotPostDraftUpdateProtocol> {

	UILabel* _label;
	BOOL _firstTime;
	UIButton* _toggleButton;
	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,retain) UIButton * toggleButton;                   //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UIButton *)toggleButton;
-(PTHTweetbotPostDraft *)draft;
@end
