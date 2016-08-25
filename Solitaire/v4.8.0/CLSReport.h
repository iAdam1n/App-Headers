/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/CLSCrashReport.h>

@class NSString, NSDictionary, NSDate, CLSInternalReport;

@interface CLSReport : NSObject <CLSCrashReport> {

	CLSInternalReport* _internalReport;
	unsigned _internalKVCounter;
	unsigned _userKVCounter;
	NSString* _internalCompactedKVFile;
	NSString* _internalIncrementalKVFile;
	NSString* _userCompactedKVFile;
	NSString* _userIncrementalKVFile;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
@property (nonatomic,readonly) BOOL isCrash; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,copy) NSString * userEmail; 
@property (nonatomic,readonly) CLSInternalReport * internalReport;                    //@synthesize internalReport=_internalReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * crashedOnDate; 
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(CLSInternalReport *)internalReport;
-(SCD_Struct_CL50)internalKVStorage;
-(SCD_Struct_CL50)userKVStorage;
-(NSString *)OSBuildVersion;
-(BOOL)isCrash;
-(void)recordValue:(id)arg1 forUserKey:(id)arg2 ;
-(void)recordValue:(id)arg1 forInternalKey:(id)arg2 ;
-(NSDictionary *)customKeys;
-(NSDate *)crashedOnDate;
-(id)initWithInternalReport:(id)arg1 ;
-(NSString *)userName;
-(NSString *)identifier;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(NSString *)bundleVersion;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)OSVersion;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)bundleShortVersionString;
-(NSDate *)dateCreated;
-(NSString *)userIdentifier;
@end

