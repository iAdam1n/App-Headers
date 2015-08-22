/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/MNMessageCellLayoutElement.h>

@class NSString;

@interface MNMessageCellBlockViewLayoutElement : FBValueObject <NSCopying, MNMessageCellLayoutElement> {

	double _height;
	double _leftMargin;
	double _rightMargin;
	unsigned long long _elementCategory;
	NSString* _elementKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) double leftMargin;                               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (nonatomic,readonly) double rightMargin;                              //@synthesize rightMargin=_rightMargin - In the implementation block
@property (nonatomic,readonly) unsigned long long elementCategory;              //@synthesize elementCategory=_elementCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementKind;                     //@synthesize elementKind=_elementKind - In the implementation block
+(id)newWithHeight:(double)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 elementCategory:(unsigned long long)arg4 elementKind:(id)arg5 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithHeight:(double)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 elementCategory:(unsigned long long)arg4 elementKind:(id)arg5 ;
-(unsigned long long)elementCategory;
-(double)height;
-(double)rightMargin;
-(double)leftMargin;
-(NSString *)elementKind;
@end
