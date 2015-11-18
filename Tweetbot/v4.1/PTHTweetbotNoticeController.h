/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIView, _PTHTweetbotNoticeView, UIDynamicAnimator, NSTimer, PTHTweetbotNotice;

@interface PTHTweetbotNoticeController : NSObject {

	UIView* _containerView;
	_PTHTweetbotNoticeView* _noticeView;
	UIDynamicAnimator* _animator;
	BOOL _needsToPlaySound;
	NSTimer* _hideTimer;
	/*^block*/id _didHide;
	PTHTweetbotNotice* _notice;

}

@property (nonatomic,readonly) PTHTweetbotNotice * notice;              //@synthesize notice=_notice - In the implementation block
+(void)showSuccessNotice:(id)arg1 message:(id)arg2 ;
+(void)showNotice:(id)arg1 ;
+(void)playSuccessSound;
+(void)beginQueuingNotifications;
+(void)endQueuingNotifications;
+(void)showFailureNotice:(id)arg1 message:(id)arg2 ;
+(void)_processQueue;
-(id)initWithNotice:(id)arg1 ;
-(void)showInController:(id)arg1 didHide:(/*^block*/id)arg2 ;
-(void)_hideTimeout;
-(void)_disableAnimator;
-(void)_setupHideTimer;
-(void)_didHide:(long long)arg1 ;
-(void)_setupAnimator:(BOOL)arg1 ;
-(void)_pan:(id)arg1 ;
-(void)_hide:(long long)arg1 ;
-(id)init;
-(id)description;
-(PTHTweetbotNotice *)notice;
@end
