/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBProfServicesBookingDataModel : FBValueObject <NSCopying> {

	NSString* _specialRequest;
	NSString* _invoiceID;
	NSString* _pageName;
	NSString* _pageId;
	NSString* _productItemName;
	NSString* _requestStatus;
	NSString* _userName;
	NSString* _userId;
	NSString* _startTime;
	NSDate* _rawDate;
	NSString* _requestId;
	NSString* _productItemPrice;
	NSString* _phoneNumber;
	NSString* _bookingStatus;
	NSString* _requestedTime;
	NSString* _userAvailability;
	NSString* _pageAddress;
	NSString* _productItemProfilePictureURI;

}

@property (nonatomic,copy,readonly) NSString * specialRequest;                            //@synthesize specialRequest=_specialRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * invoiceID;                                 //@synthesize invoiceID=_invoiceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                  //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageId;                                    //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * productItemName;                           //@synthesize productItemName=_productItemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestStatus;                             //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;                                  //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * rawDate;                                     //@synthesize rawDate=_rawDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestId;                                 //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) NSString * productItemPrice;                          //@synthesize productItemPrice=_productItemPrice - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * bookingStatus;                             //@synthesize bookingStatus=_bookingStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedTime;                             //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAvailability;                          //@synthesize userAvailability=_userAvailability - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageAddress;                               //@synthesize pageAddress=_pageAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * productItemProfilePictureURI;              //@synthesize productItemProfilePictureURI=_productItemProfilePictureURI - In the implementation block
-(NSString *)pageName;
-(NSString *)pageId;
-(NSString *)bookingStatus;
-(NSString *)requestedTime;
-(NSString *)specialRequest;
-(NSString *)userAvailability;
-(NSString *)productItemPrice;
-(id)initWithSpecialRequest:(id)arg1 invoiceID:(id)arg2 pageName:(id)arg3 pageId:(id)arg4 productItemName:(id)arg5 requestStatus:(id)arg6 userName:(id)arg7 userId:(id)arg8 startTime:(id)arg9 rawDate:(id)arg10 requestId:(id)arg11 productItemPrice:(id)arg12 phoneNumber:(id)arg13 bookingStatus:(id)arg14 requestedTime:(id)arg15 userAvailability:(id)arg16 pageAddress:(id)arg17 productItemProfilePictureURI:(id)arg18 ;
-(NSString *)invoiceID;
-(NSString *)productItemName;
-(NSDate *)rawDate;
-(NSString *)pageAddress;
-(NSString *)productItemProfilePictureURI;
-(NSString *)userName;
-(NSString *)phoneNumber;
-(NSString *)startTime;
-(NSString *)requestId;
-(NSString *)requestStatus;
-(NSString *)userId;
@end
