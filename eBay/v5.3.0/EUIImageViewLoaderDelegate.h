/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EUIImageViewLoaderDelegate <NSObject>
@optional
-(void)imageViewLoader:(id)arg1 willFetchImageforEUIView:(id)arg2;
-(void)imageViewLoader:(id)arg1 didSuccessfullyLoadForImageView:(id)arg2;
-(void)imageViewLoader:(id)arg1 didFailLoadForImageView:(id)arg2;
-(void)imageViewLoader:(id)arg1 didCancelLoadForImageView:(id)arg2;
-(void)imageViewLoader:(id)arg1 willDisplayImage:(id)arg2 forImageView:(id)arg3 isPlaceholderImage:(BOOL)arg4;
-(void)imageViewLoader:(id)arg1 didDisplayForImageView:(id)arg2 isPlaceholderImage:(BOOL)arg3;

@end

