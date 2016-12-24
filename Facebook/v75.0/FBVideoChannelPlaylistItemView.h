/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoChannelDimmableView.h>
#import <Facebook/FBVideoChannelTrackableVideoView.h>

@class FBVideoChannelDimmingLayer, FBVideoPlayerComponentStatefulView, NSString;

@interface FBVideoChannelPlaylistItemView : FBVideoChannelDimmableView <FBVideoChannelTrackableVideoView> {

	FBVideoChannelDimmingLayer* _upperChromeDimmingLayer;
	FBVideoChannelDimmingLayer* _lowerChromeDimmingLayer;
	FBVideoPlayerComponentStatefulView* _componentStatefulView;

}

@property (assign,nonatomic,__weak) FBVideoPlayerComponentStatefulView * componentStatefulView;              //@synthesize componentStatefulView=_componentStatefulView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBVideoPlayerComponentStatefulView *)componentStatefulView;
-(void)focusOnVideoAnimated:(BOOL)arg1 ;
-(void)loseFocusOnVideoAnimated:(BOOL)arg1 ;
-(id)_findComponentStatefulViewForRootView:(id)arg1 ;
-(void)setComponentStatefulView:(FBVideoPlayerComponentStatefulView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
@end
