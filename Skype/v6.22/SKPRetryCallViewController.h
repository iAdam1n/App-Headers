/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>

@class SKPCall, NSString, SKPConversation, MKImageView, UILabel, MKDefaultButton, SKPActivityToken, NSDictionary;

@interface SKPRetryCallViewController : SKPViewController {

	BOOL _shouldRetryWithVideo;
	SKPCall* _call;
	NSString* _conversationIdentity;
	NSString* _callGUID;
	SKPConversation* _conversation;
	MKImageView* _avatarImage;
	UILabel* _callStatusLabel;
	MKDefaultButton* _instantMessageButton;
	UILabel* _instantMessageLabel;
	MKDefaultButton* _videoMessageButton;
	UILabel* _videoMessageLabel;
	MKDefaultButton* _retryCallButton;
	UILabel* _retryCallLabel;
	SKPActivityToken* _retryCallActivity;
	/*^block*/id _fetchAuxiliaryObjectBlock;

}

@property (nonatomic,retain) SKPCall * call;                                         //@synthesize call=_call - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentity;                          //@synthesize conversationIdentity=_conversationIdentity - In the implementation block
@property (nonatomic,copy) NSString * callGUID;                                      //@synthesize callGUID=_callGUID - In the implementation block
@property (nonatomic,retain) SKPConversation * conversation;                         //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,copy) MKImageView * avatarImage;                                //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,retain) UILabel * callStatusLabel;                              //@synthesize callStatusLabel=_callStatusLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * instantMessageButton;                 //@synthesize instantMessageButton=_instantMessageButton - In the implementation block
@property (nonatomic,retain) UILabel * instantMessageLabel;                          //@synthesize instantMessageLabel=_instantMessageLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * videoMessageButton;                   //@synthesize videoMessageButton=_videoMessageButton - In the implementation block
@property (nonatomic,retain) UILabel * videoMessageLabel;                            //@synthesize videoMessageLabel=_videoMessageLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * retryCallButton;                      //@synthesize retryCallButton=_retryCallButton - In the implementation block
@property (nonatomic,retain) UILabel * retryCallLabel;                               //@synthesize retryCallLabel=_retryCallLabel - In the implementation block
@property (nonatomic,retain) SKPActivityToken * retryCallActivity;                   //@synthesize retryCallActivity=_retryCallActivity - In the implementation block
@property (nonatomic,readonly) NSDictionary * retryCallActivityContext; 
@property (nonatomic,copy) id fetchAuxiliaryObjectBlock;                             //@synthesize fetchAuxiliaryObjectBlock=_fetchAuxiliaryObjectBlock - In the implementation block
@property (nonatomic,readonly) BOOL shouldRetryWithVideo;                            //@synthesize shouldRetryWithVideo=_shouldRetryWithVideo - In the implementation block
-(void)setupView;
-(id)viewConstraints;
-(double)sizeButton;
-(void)setAvatarImage:(MKImageView *)arg1 ;
-(MKImageView *)avatarImage;
-(NSString *)conversationIdentity;
-(void)setConversationIdentity:(NSString *)arg1 ;
-(void)setCall:(SKPCall *)arg1 ;
-(NSString *)callGUID;
-(void)setCallGUID:(NSString *)arg1 ;
-(void)sendReportAndDismiss;
-(id)fetchAuxiliaryObjectBlock;
-(void)setFetchAuxiliaryObjectBlock:(id)arg1 ;
-(NSDictionary *)retryCallActivityContext;
-(void)sendReportWithDismissedReason:(id)arg1 ;
-(void)setRetryCallActivity:(SKPActivityToken *)arg1 ;
-(UILabel *)callStatusLabel;
-(MKDefaultButton *)instantMessageButton;
-(UILabel *)instantMessageLabel;
-(MKDefaultButton *)videoMessageButton;
-(UILabel *)videoMessageLabel;
-(MKDefaultButton *)retryCallButton;
-(UILabel *)retryCallLabel;
-(void)onInstantMessageButtonPress:(id)arg1 ;
-(id)sizeFont;
-(void)onVideoMessageButtonPress:(id)arg1 ;
-(void)onRetryCallButtonPress:(id)arg1 ;
-(double)sizeLabel;
-(BOOL)shouldRetryWithVideo;
-(void)setCallStatusLabel:(UILabel *)arg1 ;
-(void)setInstantMessageButton:(MKDefaultButton *)arg1 ;
-(void)setInstantMessageLabel:(UILabel *)arg1 ;
-(void)setVideoMessageButton:(MKDefaultButton *)arg1 ;
-(void)setVideoMessageLabel:(UILabel *)arg1 ;
-(void)setRetryCallButton:(MKDefaultButton *)arg1 ;
-(void)setRetryCallLabel:(UILabel *)arg1 ;
-(SKPActivityToken *)retryCallActivity;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(SKPCall *)call;
-(id)initWithCall:(id)arg1 ;
-(void)dismissViewController;
-(void)setConversation:(SKPConversation *)arg1 ;
-(SKPConversation *)conversation;
-(void)didCancel:(id)arg1 ;
@end
