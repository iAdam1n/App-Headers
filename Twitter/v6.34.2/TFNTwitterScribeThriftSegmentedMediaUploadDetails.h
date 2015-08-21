/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class NSString;

@interface TFNTwitterScribeThriftSegmentedMediaUploadDetails : NSObject <TBase, NSCoding> {

	BOOL _segmentSizeIsSet;
	BOOL _uploadedSegmentCountIsSet;
	BOOL _initializeRetryCountIsSet;
	BOOL _appendRetryCountIsSet;
	BOOL _finalizeRetryCountIsSet;
	int _segmentSize;
	int _uploadedSegmentCount;
	int _initializeRetryCount;
	int _appendRetryCount;
	int _finalizeRetryCount;

}

@property (assign,nonatomic) int segmentSize;                               //@synthesize segmentSize=_segmentSize - In the implementation block
@property (nonatomic,readonly) BOOL segmentSizeIsSet;                       //@synthesize segmentSizeIsSet=_segmentSizeIsSet - In the implementation block
@property (assign,nonatomic) int uploadedSegmentCount;                      //@synthesize uploadedSegmentCount=_uploadedSegmentCount - In the implementation block
@property (nonatomic,readonly) BOOL uploadedSegmentCountIsSet;              //@synthesize uploadedSegmentCountIsSet=_uploadedSegmentCountIsSet - In the implementation block
@property (assign,nonatomic) int initializeRetryCount;                      //@synthesize initializeRetryCount=_initializeRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL initializeRetryCountIsSet;              //@synthesize initializeRetryCountIsSet=_initializeRetryCountIsSet - In the implementation block
@property (assign,nonatomic) int appendRetryCount;                          //@synthesize appendRetryCount=_appendRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL appendRetryCountIsSet;                  //@synthesize appendRetryCountIsSet=_appendRetryCountIsSet - In the implementation block
@property (assign,nonatomic) int finalizeRetryCount;                        //@synthesize finalizeRetryCount=_finalizeRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL finalizeRetryCountIsSet;                //@synthesize finalizeRetryCountIsSet=_finalizeRetryCountIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSegmentSize:(int)arg1 ;
-(void)setUploadedSegmentCount:(int)arg1 ;
-(void)setInitializeRetryCount:(int)arg1 ;
-(void)setAppendRetryCount:(int)arg1 ;
-(void)setFinalizeRetryCount:(int)arg1 ;
-(id)initWithSegmentSize:(int)arg1 uploadedSegmentCount:(int)arg2 initializeRetryCount:(int)arg3 appendRetryCount:(int)arg4 finalizeRetryCount:(int)arg5 ;
-(int)segmentSize;
-(BOOL)segmentSizeIsSet;
-(int)uploadedSegmentCount;
-(BOOL)uploadedSegmentCountIsSet;
-(int)initializeRetryCount;
-(BOOL)initializeRetryCountIsSet;
-(int)appendRetryCount;
-(BOOL)appendRetryCountIsSet;
-(int)finalizeRetryCount;
-(BOOL)finalizeRetryCountIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

