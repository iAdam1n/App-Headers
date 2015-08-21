/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GTLObject.h>

@class GTLPlusMediaAuthor, NSString, GTLPlusMediaExif, NSNumber, GTLDateTime, NSArray;

@interface GTLPlusMedia : GTLObject

@property (retain) GTLPlusMediaAuthor * author; 
@property (copy) NSString * displayName; 
@property (copy) NSString * ETag; 
@property (retain) GTLPlusMediaExif * exif; 
@property (retain) NSNumber * height; 
@property (copy) NSString * identifier; 
@property (copy) NSString * kind; 
@property (retain) GTLDateTime * mediaCreatedTime; 
@property (copy) NSString * mediaUrl; 
@property (retain) GTLDateTime * published; 
@property (retain) NSNumber * sizeBytes; 
@property (retain) NSArray * streams; 
@property (copy) NSString * summary; 
@property (retain) GTLDateTime * updated; 
@property (copy) NSString * url; 
@property (retain) NSNumber * videoDuration; 
@property (copy) NSString * videoStatus; 
@property (retain) NSNumber * width; 
+(id)arrayPropertyToClassMap;
+(id)propertyToJSONKeyMap;
+(void)load;
@end
