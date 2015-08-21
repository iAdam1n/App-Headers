/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class NSArray, NSString;

@interface TFNBugReport : NSObject <NSCopying> {

	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _offendingAreaName;
	NSString* _offendingAreaIdentifier;
	NSString* _offendingAreaComponent;
	NSString* _reproSteps;
	NSString* _expectedResults;
	NSString* _actualResults;
	NSString* _buildInfo;
	NSString* _details;
	NSString* _shortVersion;
	NSArray* _bugReportAttachments;
	long long _source;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSArray * toRecipients;                          //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;                          //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;                         //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * offendingAreaName;                    //@synthesize offendingAreaName=_offendingAreaName - In the implementation block
@property (nonatomic,copy) NSString * offendingAreaIdentifier;              //@synthesize offendingAreaIdentifier=_offendingAreaIdentifier - In the implementation block
@property (nonatomic,copy) NSString * offendingAreaComponent;               //@synthesize offendingAreaComponent=_offendingAreaComponent - In the implementation block
@property (nonatomic,copy) NSString * reproSteps;                           //@synthesize reproSteps=_reproSteps - In the implementation block
@property (nonatomic,copy) NSString * expectedResults;                      //@synthesize expectedResults=_expectedResults - In the implementation block
@property (nonatomic,copy) NSString * actualResults;                        //@synthesize actualResults=_actualResults - In the implementation block
@property (nonatomic,copy) NSString * buildInfo;                            //@synthesize buildInfo=_buildInfo - In the implementation block
@property (nonatomic,copy) NSString * details;                              //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                         //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSArray * bugReportAttachments;                  //@synthesize bugReportAttachments=_bugReportAttachments - In the implementation block
@property (nonatomic,readonly) long long source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
-(NSString *)offendingAreaName;
-(void)setOffendingAreaName:(NSString *)arg1 ;
-(NSString *)offendingAreaIdentifier;
-(void)setOffendingAreaIdentifier:(NSString *)arg1 ;
-(NSString *)reproSteps;
-(void)setReproSteps:(NSString *)arg1 ;
-(NSString *)expectedResults;
-(void)setExpectedResults:(NSString *)arg1 ;
-(NSString *)actualResults;
-(void)setActualResults:(NSString *)arg1 ;
-(NSString *)buildInfo;
-(void)setBuildInfo:(NSString *)arg1 ;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(NSArray *)bugReportAttachments;
-(void)setBugReportAttachments:(NSArray *)arg1 ;
-(void)internalSetSource:(long long)arg1 ;
-(id)generateBugReportEmailBody;
-(NSString *)offendingAreaComponent;
-(void)setOffendingAreaComponent:(NSString *)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(NSArray *)bccRecipients;
-(void)setToRecipients:(NSArray *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(long long)source;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)details;
-(void)setDetails:(NSString *)arg1 ;
-(id)initWithSource:(long long)arg1 ;
@end

