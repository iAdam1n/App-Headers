/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class GTMHTTPFetcher, GTMHTTPFetcherService, NSURL;

@interface GPPImageView : UIImageView {

	GTMHTTPFetcher* _fetcher;
	BOOL _adjustsContentMode;
	BOOL _appendsSizeParameter;
	GTMHTTPFetcherService* _fetcherService;
	NSURL* _imageURL;

}

@property (assign,nonatomic) BOOL adjustsContentMode;                             //@synthesize adjustsContentMode=_adjustsContentMode - In the implementation block
@property (assign,nonatomic) BOOL appendsSizeParameter;                           //@synthesize appendsSizeParameter=_appendsSizeParameter - In the implementation block
@property (nonatomic,retain) GTMHTTPFetcherService * fetcherService;              //@synthesize fetcherService=_fetcherService - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                    //@synthesize imageURL=_imageURL - In the implementation block
-(GTMHTTPFetcherService *)fetcherService;
-(void)setFetcherService:(GTMHTTPFetcherService *)arg1 ;
-(void)setAppendsSizeParameter:(BOOL)arg1 ;
-(void)setAdjustsContentMode:(BOOL)arg1 ;
-(BOOL)adjustsContentMode;
-(void)cancelCurrentFetch;
-(void)fetchImageURLIfNeeded;
-(BOOL)appendsSizeParameter;
-(void)setImage:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
