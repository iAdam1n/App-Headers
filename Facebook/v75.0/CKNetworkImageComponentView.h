/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {

	BOOL _inReusePool;
	id _download;
	CKNetworkImageSpecifier* _specifier;

}

@property (nonatomic,retain) CKNetworkImageSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)didDownloadImage:(CGImageRef)arg1 error:(id)arg2 ;
-(void)updateContentsRect;
-(void)_startDownloadIfNotInReusePool;
-(CKNetworkImageSpecifier *)specifier;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setSpecifier:(CKNetworkImageSpecifier *)arg1 ;
@end
