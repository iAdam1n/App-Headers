/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@class NSArray;

@interface PTHTweetbotListsCursor : PTHTweetbotUserCursor

@property (nonatomic,__weak,readonly) NSArray * ownedLists; 
@property (nonatomic,__weak,readonly) NSArray * publicLists; 
@property (nonatomic,__weak,readonly) NSArray * privateLists; 
@property (nonatomic,__weak,readonly) NSArray * subscribedLists; 
+(Class)itemClass;
-(id)queryDictionary;
-(NSArray *)privateLists;
-(NSArray *)subscribedLists;
-(NSArray *)ownedLists;
-(double)loadNewerInterval;
-(id)requestURLString;
-(NSArray *)publicLists;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldReload;
@end
