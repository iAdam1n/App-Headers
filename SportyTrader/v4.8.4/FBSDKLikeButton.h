/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKButton.h>
#import <SportyTrader/FBSDKButtonImpressionTracking.h>
#import <SportyTrader/FBSDKLiking.h>

@class NSString, FBSDKLikeActionController;

@interface FBSDKLikeButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKLiking> {

	BOOL _isExplicitlyDisabled;
	FBSDKLikeActionController* _likeActionController;
	NSString* _objectID;
	unsigned long long _objectType;
	BOOL _soundEnabled;

}

@property (nonatomic,retain) FBSDKLikeActionController * likeActionController; 
@property (assign,getter=isSoundEnabled,nonatomic) BOOL soundEnabled;                       //@synthesize soundEnabled=_soundEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned long long objectType; 
+(void)initialize;
-(void)configureButton;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(BOOL)isImplicitlyDisabled;
-(void)_ensureLikeActionController:(BOOL)arg1 ;
-(void)_setLikeActionController:(id)arg1 ;
-(void)_resetLikeActionController;
-(void)_likeActionControllerDidResetNotification:(id)arg1 ;
-(void)setLikeActionController:(FBSDKLikeActionController *)arg1 ;
-(void)_like:(id)arg1 ;
-(BOOL)isSoundEnabled;
-(void)setSoundEnabled:(BOOL)arg1 ;
-(FBSDKLikeActionController *)likeActionController;
-(void)_likeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateNotification:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_handleTap:(id)arg1 ;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)objectID;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end
