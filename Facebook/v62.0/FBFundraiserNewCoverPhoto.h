/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface FBFundraiserNewCoverPhoto : FBValueObject <NSCopying> {

	UIImage* _image;
	NSString* _photoID;
	CGPoint _focus;

}

@property (nonatomic,copy,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoID;              //@synthesize photoID=_photoID - In the implementation block
@property (nonatomic,readonly) CGPoint focus;                        //@synthesize focus=_focus - In the implementation block
-(id)initWithImage:(id)arg1 photoID:(id)arg2 focus:(CGPoint)arg3 ;
-(UIImage *)image;
-(CGPoint)focus;
-(NSString *)photoID;
@end
