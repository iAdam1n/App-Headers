/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class FBRoundFaceModel, FBRoundFacepileMetrics, ASNetworkImageNode, ASTextNode;

@interface FBRoundFacepileNode : ASDisplayNode {

	FBRoundFaceModel* _viewModel;
	FBRoundFacepileMetrics* _metrics;
	ASNetworkImageNode* _imageNode;
	ASTextNode* _titleNode;

}
+(CGSize)sizeThatFits:(CGSize)arg1 metrics:(id)arg2 viewModel:(id)arg3 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(CGRect)_imageNodeFrame;
-(CGRect)_titleNodeFrame;
-(id)initWithFaceModel:(id)arg1 metrics:(id)arg2 imageCache:(id)arg3 imageDownloader:(id)arg4 ;
-(CGPoint)minimorphAnchorPoint;
-(void)layout;
@end
