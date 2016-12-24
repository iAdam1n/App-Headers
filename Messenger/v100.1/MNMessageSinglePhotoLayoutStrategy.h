/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessagePhotosLayoutStrategy.h>

@class NSString;

@interface MNMessageSinglePhotoLayoutStrategy : NSObject <MNMessagePhotosLayoutStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutSpecsForPhotoViewModels:(id)arg1 bounds:(CGRect)arg2 boundingTopLeftRadius:(double)arg3 boundingTopRightRadius:(double)arg4 boundingBottomLeftRadius:(double)arg5 boundingBottomRightRadius:(double)arg6 outerRadius:(double)arg7 innerRadius:(double)arg8 alignsToRight:(BOOL)arg9 ;
-(CGSize)sizeForPhotoViewModels:(id)arg1 maxSize:(CGSize)arg2 ;
-(CGSize)_sizeForPhotoViewModel:(id)arg1 maxSize:(CGSize)arg2 ;
-(id)_layoutSpecForPhotoViewModel:(id)arg1 bounds:(CGRect)arg2 boundingTopLeftRadius:(double)arg3 boundingTopRightRadius:(double)arg4 boundingBottomLeftRadius:(double)arg5 boundingBottomRightRadius:(double)arg6 alignsToRight:(BOOL)arg7 ;
@end
