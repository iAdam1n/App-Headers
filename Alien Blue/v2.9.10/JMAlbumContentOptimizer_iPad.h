/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMAlbumContentOptimizer.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSArray, NSString;

@interface JMAlbumContentOptimizer_iPad : JMAlbumContentOptimizer <UIWebViewDelegate> {

	UIWebView* _webView;
	NSArray* _galleryItems;

}

@property (retain) UIWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (retain) NSArray * galleryItems;                          //@synthesize galleryItems=_galleryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)galleryItems;
-(id)generateHTMLForMultipleGIFsOnLowMemoryDeviceWithPageTitle:(id)arg1 ;
-(void)setGalleryItems:(NSArray *)arg1 ;
-(id)generateHTMLForItems:(id)arg1 pageTitle:(id)arg2 ;
-(void)willUnloadView;
-(void)didRetrieveGalleryItems:(id)arg1 albumTitle:(id)arg2 ;
-(void)loadView;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
@end
