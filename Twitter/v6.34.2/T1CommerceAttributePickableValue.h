/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNPickableValue.h>

@class NSString, UIImage;

@interface T1CommerceAttributePickableValue : NSObject <TFNPickableValue> {

	BOOL _isPickable;
	NSString* _valueName;
	NSString* _valueDetail;

}

@property (nonatomic,readonly) BOOL isPickable;                          //@synthesize isPickable=_isPickable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * valueName;                //@synthesize valueName=_valueName - In the implementation block
@property (nonatomic,readonly) UIImage * valueIcon; 
@property (nonatomic,copy,readonly) NSString * valueDetail;              //@synthesize valueDetail=_valueDetail - In the implementation block
-(NSString *)valueName;
-(NSString *)valueDetail;
-(id)initWithValueName:(id)arg1 detail:(id)arg2 pickable:(BOOL)arg3 ;
-(BOOL)isPickable;
@end

