/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBDialogsData : NSObject {

	NSString* _method;
	NSDictionary* _arguments;
	NSDictionary* _clientState;
	NSDictionary* _results;

}

@property (nonatomic,copy) NSString * method;                       //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSDictionary * arguments;                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                  //@synthesize results=_results - In the implementation block
-(id)initWithMethod:(id)arg1 arguments:(id)arg2 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(NSDictionary *)results;
-(NSString *)method;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSDictionary *)clientState;
-(void)setClientState:(NSDictionary *)arg1 ;
-(NSDictionary *)arguments;
-(void)setMethod:(NSString *)arg1 ;
@end

