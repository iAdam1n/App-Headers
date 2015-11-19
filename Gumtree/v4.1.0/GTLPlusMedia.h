/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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
