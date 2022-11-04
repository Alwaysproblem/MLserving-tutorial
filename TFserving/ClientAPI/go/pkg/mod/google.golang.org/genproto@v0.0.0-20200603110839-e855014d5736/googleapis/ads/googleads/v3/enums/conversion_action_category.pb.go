// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.22.0
// 	protoc        v3.12.2
// source: google/ads/googleads/v3/enums/conversion_action_category.proto

package enums

import (
	reflect "reflect"
	sync "sync"

	proto "github.com/golang/protobuf/proto"
	_ "google.golang.org/genproto/googleapis/api/annotations"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

// The category of conversions that are associated with a ConversionAction.
type ConversionActionCategoryEnum_ConversionActionCategory int32

const (
	// Not specified.
	ConversionActionCategoryEnum_UNSPECIFIED ConversionActionCategoryEnum_ConversionActionCategory = 0
	// Used for return value only. Represents value unknown in this version.
	ConversionActionCategoryEnum_UNKNOWN ConversionActionCategoryEnum_ConversionActionCategory = 1
	// Default category.
	ConversionActionCategoryEnum_DEFAULT ConversionActionCategoryEnum_ConversionActionCategory = 2
	// User visiting a page.
	ConversionActionCategoryEnum_PAGE_VIEW ConversionActionCategoryEnum_ConversionActionCategory = 3
	// Purchase, sales, or "order placed" event.
	ConversionActionCategoryEnum_PURCHASE ConversionActionCategoryEnum_ConversionActionCategory = 4
	// Signup user action.
	ConversionActionCategoryEnum_SIGNUP ConversionActionCategoryEnum_ConversionActionCategory = 5
	// Lead-generating action.
	ConversionActionCategoryEnum_LEAD ConversionActionCategoryEnum_ConversionActionCategory = 6
	// Software download action (as for an app).
	ConversionActionCategoryEnum_DOWNLOAD ConversionActionCategoryEnum_ConversionActionCategory = 7
	// The addition of items to a shopping cart or bag on an advertiser site.
	ConversionActionCategoryEnum_ADD_TO_CART ConversionActionCategoryEnum_ConversionActionCategory = 8
	// When someone enters the checkout flow on an advertiser site.
	ConversionActionCategoryEnum_BEGIN_CHECKOUT ConversionActionCategoryEnum_ConversionActionCategory = 9
	// The start of a paid subscription for a product or service.
	ConversionActionCategoryEnum_SUBSCRIBE_PAID ConversionActionCategoryEnum_ConversionActionCategory = 10
	// A call to indicate interest in an advertiser's offering.
	ConversionActionCategoryEnum_PHONE_CALL_LEAD ConversionActionCategoryEnum_ConversionActionCategory = 11
	// A lead conversion imported from an external source into Google Ads.
	ConversionActionCategoryEnum_IMPORTED_LEAD ConversionActionCategoryEnum_ConversionActionCategory = 12
	// A submission of a form on an advertiser site indicating business
	// interest.
	ConversionActionCategoryEnum_SUBMIT_LEAD_FORM ConversionActionCategoryEnum_ConversionActionCategory = 13
	// A booking of an appointment with an advertiser's business.
	ConversionActionCategoryEnum_BOOK_APPOINTMENT ConversionActionCategoryEnum_ConversionActionCategory = 14
	// A quote or price estimate request.
	ConversionActionCategoryEnum_REQUEST_QUOTE ConversionActionCategoryEnum_ConversionActionCategory = 15
	// A search for an advertiser's business location with intention to visit.
	ConversionActionCategoryEnum_GET_DIRECTIONS ConversionActionCategoryEnum_ConversionActionCategory = 16
	// A click to an advertiser's partner's site.
	ConversionActionCategoryEnum_OUTBOUND_CLICK ConversionActionCategoryEnum_ConversionActionCategory = 17
	// A call, SMS, email, chat or other type of contact to an advertiser.
	ConversionActionCategoryEnum_CONTACT ConversionActionCategoryEnum_ConversionActionCategory = 18
	// A website engagement event such as long site time or a Google Analytics
	// (GA) Smart Goal. Intended to be used for GA, Firebase, GA Gold goal
	// imports.
	ConversionActionCategoryEnum_ENGAGEMENT ConversionActionCategoryEnum_ConversionActionCategory = 19
	// A visit to a physical store location.
	ConversionActionCategoryEnum_STORE_VISIT ConversionActionCategoryEnum_ConversionActionCategory = 20
	// A sale occurring in a physical store.
	ConversionActionCategoryEnum_STORE_SALE ConversionActionCategoryEnum_ConversionActionCategory = 21
)

// Enum value maps for ConversionActionCategoryEnum_ConversionActionCategory.
var (
	ConversionActionCategoryEnum_ConversionActionCategory_name = map[int32]string{
		0:  "UNSPECIFIED",
		1:  "UNKNOWN",
		2:  "DEFAULT",
		3:  "PAGE_VIEW",
		4:  "PURCHASE",
		5:  "SIGNUP",
		6:  "LEAD",
		7:  "DOWNLOAD",
		8:  "ADD_TO_CART",
		9:  "BEGIN_CHECKOUT",
		10: "SUBSCRIBE_PAID",
		11: "PHONE_CALL_LEAD",
		12: "IMPORTED_LEAD",
		13: "SUBMIT_LEAD_FORM",
		14: "BOOK_APPOINTMENT",
		15: "REQUEST_QUOTE",
		16: "GET_DIRECTIONS",
		17: "OUTBOUND_CLICK",
		18: "CONTACT",
		19: "ENGAGEMENT",
		20: "STORE_VISIT",
		21: "STORE_SALE",
	}
	ConversionActionCategoryEnum_ConversionActionCategory_value = map[string]int32{
		"UNSPECIFIED":      0,
		"UNKNOWN":          1,
		"DEFAULT":          2,
		"PAGE_VIEW":        3,
		"PURCHASE":         4,
		"SIGNUP":           5,
		"LEAD":             6,
		"DOWNLOAD":         7,
		"ADD_TO_CART":      8,
		"BEGIN_CHECKOUT":   9,
		"SUBSCRIBE_PAID":   10,
		"PHONE_CALL_LEAD":  11,
		"IMPORTED_LEAD":    12,
		"SUBMIT_LEAD_FORM": 13,
		"BOOK_APPOINTMENT": 14,
		"REQUEST_QUOTE":    15,
		"GET_DIRECTIONS":   16,
		"OUTBOUND_CLICK":   17,
		"CONTACT":          18,
		"ENGAGEMENT":       19,
		"STORE_VISIT":      20,
		"STORE_SALE":       21,
	}
)

func (x ConversionActionCategoryEnum_ConversionActionCategory) Enum() *ConversionActionCategoryEnum_ConversionActionCategory {
	p := new(ConversionActionCategoryEnum_ConversionActionCategory)
	*p = x
	return p
}

func (x ConversionActionCategoryEnum_ConversionActionCategory) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (ConversionActionCategoryEnum_ConversionActionCategory) Descriptor() protoreflect.EnumDescriptor {
	return file_google_ads_googleads_v3_enums_conversion_action_category_proto_enumTypes[0].Descriptor()
}

func (ConversionActionCategoryEnum_ConversionActionCategory) Type() protoreflect.EnumType {
	return &file_google_ads_googleads_v3_enums_conversion_action_category_proto_enumTypes[0]
}

func (x ConversionActionCategoryEnum_ConversionActionCategory) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use ConversionActionCategoryEnum_ConversionActionCategory.Descriptor instead.
func (ConversionActionCategoryEnum_ConversionActionCategory) EnumDescriptor() ([]byte, []int) {
	return file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescGZIP(), []int{0, 0}
}

// Container for enum describing the category of conversions that are associated
// with a ConversionAction.
type ConversionActionCategoryEnum struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *ConversionActionCategoryEnum) Reset() {
	*x = ConversionActionCategoryEnum{}
	if protoimpl.UnsafeEnabled {
		mi := &file_google_ads_googleads_v3_enums_conversion_action_category_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ConversionActionCategoryEnum) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ConversionActionCategoryEnum) ProtoMessage() {}

func (x *ConversionActionCategoryEnum) ProtoReflect() protoreflect.Message {
	mi := &file_google_ads_googleads_v3_enums_conversion_action_category_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ConversionActionCategoryEnum.ProtoReflect.Descriptor instead.
func (*ConversionActionCategoryEnum) Descriptor() ([]byte, []int) {
	return file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescGZIP(), []int{0}
}

var File_google_ads_googleads_v3_enums_conversion_action_category_proto protoreflect.FileDescriptor

var file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDesc = []byte{
	0x0a, 0x3e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x64, 0x73, 0x2f, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x33, 0x2f, 0x65, 0x6e, 0x75, 0x6d, 0x73, 0x2f,
	0x63, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x61, 0x63, 0x74, 0x69, 0x6f,
	0x6e, 0x5f, 0x63, 0x61, 0x74, 0x65, 0x67, 0x6f, 0x72, 0x79, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x12, 0x1d, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x61, 0x64, 0x73, 0x2e, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2e, 0x76, 0x33, 0x2e, 0x65, 0x6e, 0x75, 0x6d, 0x73, 0x1a,
	0x1c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x61, 0x6e, 0x6e, 0x6f,
	0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0xad, 0x03,
	0x0a, 0x1c, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x41, 0x63, 0x74, 0x69,
	0x6f, 0x6e, 0x43, 0x61, 0x74, 0x65, 0x67, 0x6f, 0x72, 0x79, 0x45, 0x6e, 0x75, 0x6d, 0x22, 0x8c,
	0x03, 0x0a, 0x18, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x41, 0x63, 0x74,
	0x69, 0x6f, 0x6e, 0x43, 0x61, 0x74, 0x65, 0x67, 0x6f, 0x72, 0x79, 0x12, 0x0f, 0x0a, 0x0b, 0x55,
	0x4e, 0x53, 0x50, 0x45, 0x43, 0x49, 0x46, 0x49, 0x45, 0x44, 0x10, 0x00, 0x12, 0x0b, 0x0a, 0x07,
	0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e, 0x10, 0x01, 0x12, 0x0b, 0x0a, 0x07, 0x44, 0x45, 0x46,
	0x41, 0x55, 0x4c, 0x54, 0x10, 0x02, 0x12, 0x0d, 0x0a, 0x09, 0x50, 0x41, 0x47, 0x45, 0x5f, 0x56,
	0x49, 0x45, 0x57, 0x10, 0x03, 0x12, 0x0c, 0x0a, 0x08, 0x50, 0x55, 0x52, 0x43, 0x48, 0x41, 0x53,
	0x45, 0x10, 0x04, 0x12, 0x0a, 0x0a, 0x06, 0x53, 0x49, 0x47, 0x4e, 0x55, 0x50, 0x10, 0x05, 0x12,
	0x08, 0x0a, 0x04, 0x4c, 0x45, 0x41, 0x44, 0x10, 0x06, 0x12, 0x0c, 0x0a, 0x08, 0x44, 0x4f, 0x57,
	0x4e, 0x4c, 0x4f, 0x41, 0x44, 0x10, 0x07, 0x12, 0x0f, 0x0a, 0x0b, 0x41, 0x44, 0x44, 0x5f, 0x54,
	0x4f, 0x5f, 0x43, 0x41, 0x52, 0x54, 0x10, 0x08, 0x12, 0x12, 0x0a, 0x0e, 0x42, 0x45, 0x47, 0x49,
	0x4e, 0x5f, 0x43, 0x48, 0x45, 0x43, 0x4b, 0x4f, 0x55, 0x54, 0x10, 0x09, 0x12, 0x12, 0x0a, 0x0e,
	0x53, 0x55, 0x42, 0x53, 0x43, 0x52, 0x49, 0x42, 0x45, 0x5f, 0x50, 0x41, 0x49, 0x44, 0x10, 0x0a,
	0x12, 0x13, 0x0a, 0x0f, 0x50, 0x48, 0x4f, 0x4e, 0x45, 0x5f, 0x43, 0x41, 0x4c, 0x4c, 0x5f, 0x4c,
	0x45, 0x41, 0x44, 0x10, 0x0b, 0x12, 0x11, 0x0a, 0x0d, 0x49, 0x4d, 0x50, 0x4f, 0x52, 0x54, 0x45,
	0x44, 0x5f, 0x4c, 0x45, 0x41, 0x44, 0x10, 0x0c, 0x12, 0x14, 0x0a, 0x10, 0x53, 0x55, 0x42, 0x4d,
	0x49, 0x54, 0x5f, 0x4c, 0x45, 0x41, 0x44, 0x5f, 0x46, 0x4f, 0x52, 0x4d, 0x10, 0x0d, 0x12, 0x14,
	0x0a, 0x10, 0x42, 0x4f, 0x4f, 0x4b, 0x5f, 0x41, 0x50, 0x50, 0x4f, 0x49, 0x4e, 0x54, 0x4d, 0x45,
	0x4e, 0x54, 0x10, 0x0e, 0x12, 0x11, 0x0a, 0x0d, 0x52, 0x45, 0x51, 0x55, 0x45, 0x53, 0x54, 0x5f,
	0x51, 0x55, 0x4f, 0x54, 0x45, 0x10, 0x0f, 0x12, 0x12, 0x0a, 0x0e, 0x47, 0x45, 0x54, 0x5f, 0x44,
	0x49, 0x52, 0x45, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x53, 0x10, 0x10, 0x12, 0x12, 0x0a, 0x0e, 0x4f,
	0x55, 0x54, 0x42, 0x4f, 0x55, 0x4e, 0x44, 0x5f, 0x43, 0x4c, 0x49, 0x43, 0x4b, 0x10, 0x11, 0x12,
	0x0b, 0x0a, 0x07, 0x43, 0x4f, 0x4e, 0x54, 0x41, 0x43, 0x54, 0x10, 0x12, 0x12, 0x0e, 0x0a, 0x0a,
	0x45, 0x4e, 0x47, 0x41, 0x47, 0x45, 0x4d, 0x45, 0x4e, 0x54, 0x10, 0x13, 0x12, 0x0f, 0x0a, 0x0b,
	0x53, 0x54, 0x4f, 0x52, 0x45, 0x5f, 0x56, 0x49, 0x53, 0x49, 0x54, 0x10, 0x14, 0x12, 0x0e, 0x0a,
	0x0a, 0x53, 0x54, 0x4f, 0x52, 0x45, 0x5f, 0x53, 0x41, 0x4c, 0x45, 0x10, 0x15, 0x42, 0xf2, 0x01,
	0x0a, 0x21, 0x63, 0x6f, 0x6d, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x61, 0x64, 0x73,
	0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2e, 0x76, 0x33, 0x2e, 0x65, 0x6e,
	0x75, 0x6d, 0x73, 0x42, 0x1d, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x41,
	0x63, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x61, 0x74, 0x65, 0x67, 0x6f, 0x72, 0x79, 0x50, 0x72, 0x6f,
	0x74, 0x6f, 0x50, 0x01, 0x5a, 0x42, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x67, 0x6f, 0x6c,
	0x61, 0x6e, 0x67, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x67, 0x65, 0x6e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x2f, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x61, 0x64, 0x73, 0x2f,
	0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x61, 0x64, 0x73, 0x2f, 0x76, 0x33, 0x2f, 0x65, 0x6e, 0x75,
	0x6d, 0x73, 0x3b, 0x65, 0x6e, 0x75, 0x6d, 0x73, 0xa2, 0x02, 0x03, 0x47, 0x41, 0x41, 0xaa, 0x02,
	0x1d, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x41, 0x64, 0x73, 0x2e, 0x47, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x41, 0x64, 0x73, 0x2e, 0x56, 0x33, 0x2e, 0x45, 0x6e, 0x75, 0x6d, 0x73, 0xca, 0x02,
	0x1d, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x5c, 0x41, 0x64, 0x73, 0x5c, 0x47, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x41, 0x64, 0x73, 0x5c, 0x56, 0x33, 0x5c, 0x45, 0x6e, 0x75, 0x6d, 0x73, 0xea, 0x02,
	0x21, 0x47, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x3a, 0x3a, 0x41, 0x64, 0x73, 0x3a, 0x3a, 0x47, 0x6f,
	0x6f, 0x67, 0x6c, 0x65, 0x41, 0x64, 0x73, 0x3a, 0x3a, 0x56, 0x33, 0x3a, 0x3a, 0x45, 0x6e, 0x75,
	0x6d, 0x73, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescOnce sync.Once
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescData = file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDesc
)

func file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescGZIP() []byte {
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescOnce.Do(func() {
		file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescData = protoimpl.X.CompressGZIP(file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescData)
	})
	return file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDescData
}

var file_google_ads_googleads_v3_enums_conversion_action_category_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_google_ads_googleads_v3_enums_conversion_action_category_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_google_ads_googleads_v3_enums_conversion_action_category_proto_goTypes = []interface{}{
	(ConversionActionCategoryEnum_ConversionActionCategory)(0), // 0: google.ads.googleads.v3.enums.ConversionActionCategoryEnum.ConversionActionCategory
	(*ConversionActionCategoryEnum)(nil),                       // 1: google.ads.googleads.v3.enums.ConversionActionCategoryEnum
}
var file_google_ads_googleads_v3_enums_conversion_action_category_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_google_ads_googleads_v3_enums_conversion_action_category_proto_init() }
func file_google_ads_googleads_v3_enums_conversion_action_category_proto_init() {
	if File_google_ads_googleads_v3_enums_conversion_action_category_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_google_ads_googleads_v3_enums_conversion_action_category_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ConversionActionCategoryEnum); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_google_ads_googleads_v3_enums_conversion_action_category_proto_goTypes,
		DependencyIndexes: file_google_ads_googleads_v3_enums_conversion_action_category_proto_depIdxs,
		EnumInfos:         file_google_ads_googleads_v3_enums_conversion_action_category_proto_enumTypes,
		MessageInfos:      file_google_ads_googleads_v3_enums_conversion_action_category_proto_msgTypes,
	}.Build()
	File_google_ads_googleads_v3_enums_conversion_action_category_proto = out.File
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_rawDesc = nil
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_goTypes = nil
	file_google_ads_googleads_v3_enums_conversion_action_category_proto_depIdxs = nil
}
