/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
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
-(void)dealloc;
-(void)setDelegate:(NSObject*<ATLargeImageResizerDelegate>)arg1 ;
-(NSObject*<ATLargeImageResizerDelegate>)delegate;
@end

