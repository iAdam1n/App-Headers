/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface FBAnalyticsEventSchema : NSObject {

	NSMutableDictionary* _requiredColumns;
	NSMutableDictionary* _optionalColumns;
	BOOL _clientEnforcement;
	NSString* _poc;
	NSArray* _subscribers;
	NSArray* _inheritFrom;

}

@property (nonatomic,copy) NSString * poc;                              //@synthesize poc=_poc - In the implementation block
@property (nonatomic,copy) NSArray * subscribers;                       //@synthesize subscribers=_subscribers - In the implementation block
@property (assign,nonatomic) BOOL clientEnforcement;                    //@synthesize clientEnforcement=_clientEnforcement - In the implementation block
@property (nonatomic,copy) NSDictionary * requiredColumns;              //@synthesize requiredColumns=_requiredColumns - In the implementation block
@property (nonatomic,copy) NSDictionary * optionalColumns;              //@synthesize optionalColumns=_optionalColumns - In the implementation block
@property (nonatomic,copy) NSArray * inheritFrom;                       //@synthesize inheritFrom=_inheritFrom - In the implementation block
-(id)initWithEventSchemaDictionary:(id)arg1 ;
-(NSArray *)inheritFrom;
-(void)insertColumnsFromInheritedSchema:(id)arg1 ;
-(NSDictionary *)requiredColumns;
-(NSDictionary *)optionalColumns;
-(NSString *)poc;
-(void)setPoc:(NSString *)arg1 ;
-(BOOL)clientEnforcement;
-(void)setClientEnforcement:(BOOL)arg1 ;
-(void)setRequiredColumns:(NSDictionary *)arg1 ;
-(void)setOptionalColumns:(NSDictionary *)arg1 ;
-(void)setInheritFrom:(NSArray *)arg1 ;
-(NSArray *)subscribers;
-(void)setSubscribers:(NSArray *)arg1 ;
@end
