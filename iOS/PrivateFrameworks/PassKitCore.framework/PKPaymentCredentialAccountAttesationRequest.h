//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSDictionary;

@interface PKPaymentCredentialAccountAttesationRequest : PKPaymentWebServiceRequest
{
    NSDictionary *_requestBody;
}

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)requestBodyWithAttesationRequest:(id)arg1;
- (id)initWithCredential:(id)arg1 attesationRequest:(id)arg2;

@end

