/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBookmarksRowTableViewCellConfigProtocol.h>

@class NSString;

@interface FBBookmarksRowTableViewCellConfig : NSObject <FBBookmarksRowTableViewCellConfigProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)imageCornerRadiusForCardStyle:(unsigned long long)arg1 roundingStyle:(unsigned long long)arg2 ;
+(double)imageLeftRightMargin;
+(BOOL)hideChevrons;
+(BOOL)hideSeparators;
+(UIEdgeInsets)contentInsetsForCardStyle:(unsigned long long)arg1 isFirstCell:(BOOL)arg2 isLastCell:(BOOL)arg3 ;
+(double)imageSize;
@end
