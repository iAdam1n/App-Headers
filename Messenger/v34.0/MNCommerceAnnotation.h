/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MKAnnotation.h>

@class NSString;

@interface MNCommerceAnnotation : NSObject <MKAnnotation> {

	CGPoint _coordinate;
	BOOL _isCircleAnnotation;

}

@property (assign,nonatomic) BOOL isCircleAnnotation;                 //@synthesize isCircleAnnotation=_isCircleAnnotation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(BOOL)isCircleAnnotation;
-(void)setIsCircleAnnotation:(BOOL)arg1 ;
-(CGPoint)coordinate;
-(void)setCoordinate:(CGPoint)arg1 ;
@end

