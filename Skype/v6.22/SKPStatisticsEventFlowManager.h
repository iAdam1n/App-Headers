/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SKPStatisticsEventFlowManager : NSObject {

	NSMutableDictionary* _flowCache;

}

@property (nonatomic,retain) NSMutableDictionary * flowCache;              //@synthesize flowCache=_flowCache - In the implementation block
-(BOOL)flowForEventIsStarted:(unsigned long long)arg1 ;
-(void)addAttributes:(id)arg1 forEvent:(unsigned long long)arg2 ;
-(void)startFlowForEvent:(unsigned long long)arg1 ;
-(void)completeFlowForEvent:(unsigned long long)arg1 ;
-(NSMutableDictionary *)flowCache;
-(id)flowForEvent:(unsigned long long)arg1 ;
-(void)setFlowCache:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
