/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableDictionary, NSString, NSMutableArray;

@interface FBAnalyticsEventSchemaValidator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isUnitTest;
	NSMutableDictionary* _schemaPathLookup;
	NSMutableDictionary* _eventSchemaDict;
	NSString* _developerUnixName;
	NSMutableArray* _errorMessages;
	NSObject*<OS_dispatch_group> _dispatch_group;

}

@property (nonatomic,copy) NSMutableDictionary * schemaPathLookup;                     //@synthesize schemaPathLookup=_schemaPathLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventSchemaDict;                    //@synthesize eventSchemaDict=_eventSchemaDict - In the implementation block
@property (nonatomic,copy) NSString * developerUnixName;                               //@synthesize developerUnixName=_developerUnixName - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorMessages;                           //@synthesize errorMessages=_errorMessages - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> dispatch_group;              //@synthesize dispatch_group=_dispatch_group - In the implementation block
+(id)sharedValidator;
-(void)loadEventSchemaFromPath:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)validateDataType:(id)arg1 expectedType:(id)arg2 ;
-(id)eventSchemaDict:(id)arg1 ;
-(void)validateJsonData:(/*^block*/id)arg1 forEvent:(id)arg2 ;
-(void)_validateEvent:(id)arg1 withExtra:(/*^block*/id)arg2 ;
-(id)_expectedDataType:(id)arg1 inSchema:(id)arg2 ;
-(BOOL)validateDataType:(id)arg1 expectedDataType:(id)arg2 ;
-(BOOL)checkIfDeveloperNeedsValidation:(id)arg1 againstPOC:(id)arg2 againstSubscribers:(id)arg3 ;
-(void)setDeveloperUnixNameWithPocNameForEvent:(id)arg1 ;
-(long long)validationErrorCount;
-(NSMutableDictionary *)schemaPathLookup;
-(void)setSchemaPathLookup:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)eventSchemaDict;
-(void)setEventSchemaDict:(NSMutableDictionary *)arg1 ;
-(NSString *)developerUnixName;
-(void)setDeveloperUnixName:(NSString *)arg1 ;
-(NSMutableArray *)errorMessages;
-(void)setErrorMessages:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatch_group;
-(void)setDispatch_group:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)init;
@end
