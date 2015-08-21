/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ACTReporterPrivate.h>
#import <Gumtree/ACTAutomatedUsageReporting.h>
#import <Gumtree/ACTReportingInfoDelegate.h>
#import <Gumtree/ACTPingerDelegate.h>

@class NSDictionary, NSString;

@interface ACTRemarketingReporterPrivate : ACTReporterPrivate <ACTAutomatedUsageReporting, ACTReportingInfoDelegate, ACTPingerDelegate> {

	NSDictionary* _parameters;
	NSString* _conversionID;
	double _timestamp;

}

@property (nonatomic,copy) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * conversionID;                 //@synthesize conversionID=_conversionID - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConversionID:(id)arg1 customParameters:(id)arg2 ;
-(BOOL)shouldReport;
-(id)queryParameterSeparator;
-(id)reportingURLPrefix;
-(void)pingDidSucceed:(id)arg1 ;
-(void)ping:(id)arg1 didFailWithError:(id)arg2 ;
-(id)automatedUsageConversionID;
-(NSString *)conversionID;
-(void)setConversionID:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)queryParameters;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end
