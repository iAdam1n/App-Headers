/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
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
-(void)setAccount:(id)arg1 ;
-(id)initWithList:(id)arg1 ;
-(PTHTweetbotList *)list;
-(id)uniqueID;
@end

