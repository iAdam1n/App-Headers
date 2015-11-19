/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSSet, NSString;

@interface CRNSURLSessionDelegateProxy : NSProxy <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {

	id _delegate;
	NSSet* _selectorsWeRespondTo;

}

@property (nonatomic,readonly) id delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectorsWeRespondTo;              //@synthesize selectorsWeRespondTo=_selectorsWeRespondTo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)selectorsWeRespondTo;
-(void)setSelectorsWeRespondTo:(NSSet *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

