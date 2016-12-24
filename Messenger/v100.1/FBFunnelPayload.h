/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface FBFunnelPayload : NSObject {

	NSMutableDictionary* _payload;
	NSMutableArray* _keysWithNilValue;

}

@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,copy,readonly) NSArray * keysWithNilValue;              //@synthesize keysWithNilValue=_keysWithNilValue - In the implementation block
-(void)addKey:(id)arg1 withNumberValue:(id)arg2 ;
-(void)addKey:(id)arg1 withBooleanValue:(BOOL)arg2 ;
-(void)addKey:(id)arg1 withStringValue:(id)arg2 ;
-(void)deserialization:(id)arg1 ;
-(void)addKey:(id)arg1 withArrayValue:(id)arg2 ;
-(NSArray *)keysWithNilValue;
-(id)init;
-(NSDictionary *)payload;
@end
