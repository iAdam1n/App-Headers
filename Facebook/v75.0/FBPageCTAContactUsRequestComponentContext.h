/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageRequestDetailAlertComponentDelegate, FBPageRequestActionComponentDelegate, FBPageRequestDetailBanUserComponentDelegate, FBPageRequestMarkComponentDelegate;
@interface FBPageCTAContactUsRequestComponentContext : NSObject {

	id<FBPageRequestDetailAlertComponentDelegate> _detailAlertDelegate;
	id<FBPageRequestActionComponentDelegate> _actionDelegate;
	id<FBPageRequestDetailBanUserComponentDelegate> _banUserDelegate;
	id<FBPageRequestMarkComponentDelegate> _markDelegate;

}

@property (assign,nonatomic,__weak) id<FBPageRequestDetailAlertComponentDelegate> detailAlertDelegate;              //@synthesize detailAlertDelegate=_detailAlertDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageRequestActionComponentDelegate> actionDelegate;                        //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageRequestDetailBanUserComponentDelegate> banUserDelegate;                //@synthesize banUserDelegate=_banUserDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageRequestMarkComponentDelegate> markDelegate;                            //@synthesize markDelegate=_markDelegate - In the implementation block
-(id<FBPageRequestDetailAlertComponentDelegate>)detailAlertDelegate;
-(id<FBPageRequestDetailBanUserComponentDelegate>)banUserDelegate;
-(id<FBPageRequestMarkComponentDelegate>)markDelegate;
-(void)setDetailAlertDelegate:(id<FBPageRequestDetailAlertComponentDelegate>)arg1 ;
-(void)setMarkDelegate:(id<FBPageRequestMarkComponentDelegate>)arg1 ;
-(void)setBanUserDelegate:(id<FBPageRequestDetailBanUserComponentDelegate>)arg1 ;
-(void)setActionDelegate:(id<FBPageRequestActionComponentDelegate>)arg1 ;
-(id<FBPageRequestActionComponentDelegate>)actionDelegate;
@end
