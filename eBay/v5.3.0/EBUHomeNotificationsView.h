/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIView.h>
#import <nautilus/EBNDataManagerObserver.h>

@class NSArray, EUIView, NSLayoutConstraint, EBNUSSToDoNotification, EBUSingleNotificationView, NSString;

@interface EBUHomeNotificationsView : EUIView <EBNDataManagerObserver> {

	NSArray* _notifications;
	EUIView* _dividerView;
	EUIView* _bottomDividerView;
	NSArray* _notificationViewsArray;
	NSLayoutConstraint* _firstNotificationRightConstraint;
	NSArray* _dividerViewConstraints;
	EBNUSSToDoNotification* _pendingTappedNotification;
	EBUSingleNotificationView* _tappedNotificationView;

}

@property (nonatomic,retain) NSArray * notifications;                                            //@synthesize notifications=_notifications - In the implementation block
@property (assign,nonatomic,__weak) EUIView * dividerView;                                       //@synthesize dividerView=_dividerView - In the implementation block
@property (assign,nonatomic,__weak) EUIView * bottomDividerView;                                 //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
@property (nonatomic,retain) NSArray * notificationViewsArray;                                   //@synthesize notificationViewsArray=_notificationViewsArray - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstNotificationRightConstraint;              //@synthesize firstNotificationRightConstraint=_firstNotificationRightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * dividerViewConstraints;                                   //@synthesize dividerViewConstraints=_dividerViewConstraints - In the implementation block
@property (nonatomic,retain) EBNUSSToDoNotification * pendingTappedNotification;                 //@synthesize pendingTappedNotification=_pendingTappedNotification - In the implementation block
@property (nonatomic,retain) EBUSingleNotificationView * tappedNotificationView;                 //@synthesize tappedNotificationView=_tappedNotificationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eui_newDynamicSizeTemplate;
-(EUIView *)bottomDividerView;
-(void)setBottomDividerView:(EUIView *)arg1 ;
-(void)setDividerView:(EUIView *)arg1 ;
-(EUIView *)dividerView;
-(NSArray *)notificationViewsArray;
-(void)singleNotificationViewTapped:(id)arg1 ;
-(void)loadNotifications:(id)arg1 isReset:(BOOL)arg2 ;
-(void)updateDividerViewConstraints;
-(void)setTappedNotificationView:(EBUSingleNotificationView *)arg1 ;
-(EBUSingleNotificationView *)tappedNotificationView;
-(void)navigateToListingForToDoNotification:(id)arg1 withNSSNotification:(id)arg2 ;
-(void)markNSSNotificationRead:(id)arg1 ;
-(void)setPendingTappedNotification:(EBNUSSToDoNotification *)arg1 ;
-(EBNUSSToDoNotification *)pendingTappedNotification;
-(void)loadNotifications:(id)arg1 ;
-(void)setNotificationViewsArray:(NSArray *)arg1 ;
-(NSLayoutConstraint *)firstNotificationRightConstraint;
-(void)setFirstNotificationRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)dividerViewConstraints;
-(void)setDividerViewConstraints:(NSArray *)arg1 ;
-(void)resultsChangedInDataManager:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reset;
-(NSArray *)notifications;
-(void)setNotifications:(NSArray *)arg1 ;
-(void)setupConstraints;
@end
