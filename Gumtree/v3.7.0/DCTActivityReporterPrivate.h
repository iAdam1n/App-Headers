/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ACTReporterPrivate.h>
#import <Gumtree/ACTReportingInfoDelegate.h>

@class DCTActivityRequest, NSString;

@interface DCTActivityReporterPrivate : ACTReporterPrivate <ACTReportingInfoDelegate> {

	DCTActivityRequest* _request;

}

@property (nonatomic,copy) DCTActivityRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldReport;
-(id)queryParameterSeparator;
-(id)reportingURLPrefix;
-(id)deduplicationID;
-(id)commonQueryParameters;
-(DCTActivityRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(id)queryParameters;
-(void)setRequest:(DCTActivityRequest *)arg1 ;
@end

