/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ATLargeImageResizerDelegate;
#import <Gumtree/Gumtree-Structs.h>
@class NSURL, UIImage, NSObject;

@interface ATLargeImageResizer : NSObject {

	NSURL* imageURL;
	UIImage* originalImage;
	BOOL shouldCancel;
	NSObject*<ATLargeImageResizerDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<ATLargeImageResizerDelegate> delegate; 
-(id)initWithImageAssetURL:(id)arg1 originalImage:(id)arg2 delegate:(id)arg3 ;
-(void)resizeWithMaximumSize:(CGSize)arg1 ;
-(void)cancel;
-(void)setDelegate:(NSObject*<ATLargeImageResizerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<ATLargeImageResizerDelegate>)delegate;
@end

