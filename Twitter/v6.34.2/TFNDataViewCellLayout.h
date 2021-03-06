/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NSCopying;
#import <Twitter/Twitter-Structs.h>
@interface TFNDataViewCellLayout : NSObject {

	id<NSCopying> _objectIdentifier;
	CGSize _size;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) id<NSCopying> objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
+(id)cellLayoutForDataView:(id)arg1 atIndexPath:(id)arg2 objectIdentifier:(id)arg3 initialization:(/*^block*/id)arg4 ;
-(BOOL)isValidForConstrainingSize:(CGSize)arg1 contentEdgeInsets:(UIEdgeInsets)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id<NSCopying>)objectIdentifier;
-(void)setObjectIdentifier:(id<NSCopying>)arg1 ;
@end

