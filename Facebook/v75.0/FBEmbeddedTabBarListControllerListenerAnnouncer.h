/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBEmbeddedTabBarListControllerListener.h>

@class NSString;

@interface FBEmbeddedTabBarListControllerListenerAnnouncer : FBAnnouncerBase <FBEmbeddedTabBarListControllerListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)didLoadContentView:(id)arg1 forTabAtIndex:(unsigned long long)arg2 ;
-(void)didUpdateHeaderViewSize:(CGSize)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
