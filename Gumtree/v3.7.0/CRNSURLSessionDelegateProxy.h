/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <Gumtree/NSURLSessionDelegate.h>
#import <Gumtree/NSURLSessionTaskDelegate.h>
#import <Gumtree/NSURLSessionDataDelegate.h>
#import <Gumtree/NSURLSessionDownloadDelegate.h>

@class NSSet, NSString;

@interface CRNSURLSessionDelegateProxy : NSProxy <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {

	id _delegate;
	NSSet* _selectorsWeRespondTo;

}

@property (nonatomic,retain,readonly) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectorsWeRespondTo;              //@synthesize selectorsWeRespondTo=_selectorsWeRespondTo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)selectorsWeRespondTo;
-(void)setSelectorsWeRespondTo:(NSSet *)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
@end

