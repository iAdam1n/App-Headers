/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LocSelectorMapper : NSObject {

	NSMutableDictionary* mapper;

}

@property (nonatomic,retain) NSMutableDictionary * mapper; 
+(SEL)findSelectorOfClass:(Class)arg1 asName:(id)arg2 ;
+(id)instance;
-(SEL)selectorOfClass:(Class)arg1 asName:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setMapper:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapper;
@end

