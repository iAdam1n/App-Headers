/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GTLObject.h>

@class GTLPlusCommentActor, NSString, NSArray, GTLPlusCommentObject, GTLPlusCommentPlusoners, GTLDateTime;

@interface GTLPlusComment : GTLObject

@property (retain) GTLPlusCommentActor * actor; 
@property (copy) NSString * ETag; 
@property (copy) NSString * identifier; 
@property (retain) NSArray * inReplyTo; 
@property (copy) NSString * kind; 
@property (retain) GTLPlusCommentObject * object; 
@property (retain) GTLPlusCommentPlusoners * plusoners; 
@property (retain) GTLDateTime * published; 
@property (copy) NSString * selfLink; 
@property (retain) GTLDateTime * updated; 
@property (copy) NSString * verb; 
+(id)arrayPropertyToClassMap;
+(id)propertyToJSONKeyMap;
+(void)load;
@end

