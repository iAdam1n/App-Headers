/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBScrollingContentViewControllerListener.h>

@class NSMutableDictionary, UIScrollView, NSString;

@interface FBScrollingContentViewControllerListenerAnnouncer : FBAnnouncerBase <FBScrollingContentViewControllerListener> {

	NSMutableDictionary* _sidefeedYOffsets;
	UIScrollView* _lastKnownScrollView;

}

@property (nonatomic,readonly) double lastKnownSidefeedYOffset; 
@property (nonatomic,__weak,readonly) UIScrollView * lastKnownScrollView;              //@synthesize lastKnownScrollView=_lastKnownScrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollingContentViewControllerDidChangeScrollView:(id)arg1 ;
-(void)scrollingContentViewControllerDidChangeSidefeedYOffset:(double)arg1 forKey:(id)arg2 ;
-(double)lastKnownSidefeedYOffset;
-(UIScrollView *)lastKnownScrollView;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
