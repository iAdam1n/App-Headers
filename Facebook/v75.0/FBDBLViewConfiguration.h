/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAuthCheckpointViewConfiguration.h>
#import <Facebook/FBDBLViewConfiguring.h>

@class NSString;

@interface FBDBLViewConfiguration : FBAuthCheckpointViewConfiguration <FBDBLViewConfiguring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)maximumAccountTileSize;
-(double)accountTileSpacing;
-(id)headerImageForUserChooser;
-(CGSize)accountTileImageSize;
-(double)accountTileFontSize;
-(double)accountTileNameMargin;
@end
