/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfoLabelViewModel, NSURL;

@interface FBQuicksilverPlayerInfoViewModel : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfoLabelViewModel* _labelViewModel;
	NSURL* _imageURL;
	double _imageRadius;
	long long _layout;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoLabelViewModel * labelViewModel;              //@synthesize labelViewModel=_labelViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) double imageRadius;                                                       //@synthesize imageRadius=_imageRadius - In the implementation block
@property (nonatomic,readonly) long long layout;                                                         //@synthesize layout=_layout - In the implementation block
-(double)imageRadius;
-(FBQuicksilverPlayerInfoLabelViewModel *)labelViewModel;
-(id)initWithLabelViewModel:(id)arg1 imageURL:(id)arg2 imageRadius:(double)arg3 layout:(long long)arg4 ;
-(long long)layout;
-(NSURL *)imageURL;
@end
