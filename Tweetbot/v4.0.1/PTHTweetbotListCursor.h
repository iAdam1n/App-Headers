/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class PTHTweetbotList;

@interface PTHTweetbotListCursor : PTHTweetbotCursor {

	PTHTweetbotList* _list;

}

@property (nonatomic,__weak,readonly) PTHTweetbotList * list;              //@synthesize list=_list - In the implementation block
-(id)queryDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueID;
-(id)initWithList:(id)arg1 ;
-(PTHTweetbotList *)list;
-(void)setAccount:(id)arg1 ;
@end

