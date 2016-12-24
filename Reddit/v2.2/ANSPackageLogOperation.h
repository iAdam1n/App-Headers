/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSString;

@interface ANSPackageLogOperation : NSOperation {

	NSURL* _compressedLogURL;
	NSString* _multipartMimeBoundary;
	NSURL* _packagedLogURL;

}

@property (nonatomic,retain) NSURL * packagedLogURL;                        //@synthesize packagedLogURL=_packagedLogURL - In the implementation block
@property (nonatomic,retain) NSURL * compressedLogURL;                      //@synthesize compressedLogURL=_compressedLogURL - In the implementation block
@property (nonatomic,retain) NSString * multipartMimeBoundary;              //@synthesize multipartMimeBoundary=_multipartMimeBoundary - In the implementation block
-(NSURL *)packagedLogURL;
-(id)multipartURLForCompressedURL:(id)arg1 withBoundary:(id)arg2 ;
-(void)setMultipartMimeBoundary:(NSString *)arg1 ;
-(void)setPackagedLogURL:(NSURL *)arg1 ;
-(NSURL *)compressedLogURL;
-(void)setCompressedLogURL:(NSURL *)arg1 ;
-(id)initWithCompressedLogURL:(id)arg1 packagedLogURL:(id)arg2 multipartMimeBoundary:(id)arg3 ;
-(NSString *)multipartMimeBoundary;
-(void)main;
@end
