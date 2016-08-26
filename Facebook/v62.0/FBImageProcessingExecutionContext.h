/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBFilterer, NSURL;


@protocol FBImageProcessingExecutionContext <NSObject>
@property (retain) FBFilterer * thumbnailCanvas; 
@property (retain) FBFilterer * standardCanvas; 
@property (retain) NSURL * canvasAssetURL; 
@required
-(FBFilterer *)standardCanvas;
-(void)setStandardCanvas:(id)arg1;
-(void)setThumbnailCanvas:(id)arg1;
-(void)prepareStandardCanvas:(id)arg1;
-(NSURL *)canvasAssetURL;
-(void)setCanvasAssetURL:(id)arg1;
-(void)prepareThumbnailCanvas:(id)arg1;
-(FBFilterer *)thumbnailCanvas;

@end
