/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBRequestParams : NSObject {

	NSMutableDictionary* _params;

}

@property (nonatomic,readonly) NSMutableDictionary * params;              //@synthesize params=_params - In the implementation block
+(id)encode:(id)arg1 ;
+(id)parseURLParams:(id)arg1 ;
-(void)addParam:(id)arg1 withDouble:(double)arg2 ;
-(void)addParam:(id)arg1 withLongLong:(long long)arg2 ;
-(void)addParam:(id)arg1 withImage:(id)arg2 ;
-(void)addParam:(id)arg1 withData:(id)arg2 ;
-(void)addParam:(id)arg1 withObject:(id)arg2 ;
-(id)encodeForUrl;
-(void)addParam:(id)arg1 withInt:(int)arg2 ;
-(void)addParam:(id)arg1 withBool:(BOOL)arg2 ;
-(id)init;
-(void)addParam:(id)arg1 withValue:(id)arg2 ;
-(NSMutableDictionary *)params;
@end
